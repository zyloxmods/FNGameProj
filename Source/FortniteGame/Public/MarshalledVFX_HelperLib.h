#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Particles/ParticleSystemComponent.h"
#include "GameplayTagContainer.h"
#include "ParameterNameMapping.h"
#include "Templates/SubclassOf.h"
#include "MarshalledVFX_HelperLib.generated.h"

class AActor;
class UFXSystemComponent;
class UMaterialInterface;
class UObject;
class USceneComponent;

UCLASS(Blueprintable)
class UMarshalledVFX_HelperLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMarshalledVFX_HelperLib();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetVectorParam(UObject* Context, const FGameplayTagContainer& WithMatching, FName Name, const FVector& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetupDependentVFX(UObject* Context, bool bPointersAreSafeToRetain);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetMaterialParam(UObject* Context, const FGameplayTagContainer& WithMatching, FName Name, UMaterialInterface* Value);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetIntParam(UObject* Context, const FGameplayTagContainer& WithMatching, FName Name, int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetFloatParam(UObject* Context, const FGameplayTagContainer& WithMatching, FName Name, float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetColorParam(UObject* Context, const FGameplayTagContainer& WithMatching, FName Name, const FLinearColor& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetBoolParam(UObject* Context, const FGameplayTagContainer& WithMatching, FName Name, bool Value);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetBaseForSystems(UObject* Context, USceneComponent* Base);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetActorParam(UObject* Context, const FGameplayTagContainer& WithMatching, FName Name, AActor* Value);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static TArray<FParticleSysParam> MapParticleInstanceParamNames(const TMap<FName, FParameterNameMapping>& Mappings, UPARAM(Ref) TArray<FParticleSysParam>& Params, UFXSystemComponent* ForComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static TArray<UFXSystemComponent*> GetMatchingSystemComponentsAs(UObject* Context, const FGameplayTagContainer& WithMatching, TSubclassOf<UFXSystemComponent> Class);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static TArray<UFXSystemComponent*> GetMatchingSystemComponents(UObject* Context, const FGameplayTagContainer& WithMatching);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void DeactivateMatching(UObject* Context, const FGameplayTagContainer& Tags);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void CleanupDependentVFX(UObject* Context);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void ActivateMatching(UObject* Context, const FGameplayTagContainer& Tags, bool bReset);
    
};


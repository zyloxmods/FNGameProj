#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "CustomizationItemInterface.h"
#include "EFortCustomPartType.h"
#include "McpVariantChannelInfo.h"
#include "FortCosmeticDisplayActor.generated.h"

class UAthenaCosmeticItemDefinition;
class UChildActorComponent;
class UCustomCharacterPart;
class USceneComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortCosmeticDisplayActor : public AActor, public ICustomizationItemInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaCosmeticItemDefinition* CustomizationCosmeticDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* PreviewActorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMcpVariantChannelInfo> OverrideVariants;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyLightingOverrideToChildren;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLightingChannels LightingChannelsOverride;
    
public:
    AFortCosmeticDisplayActor();
protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnVariantChanged(FGameplayTag VariantChannel, FGameplayTag OldVariantTag, FGameplayTag NewVariantTag);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnPartChanged(const UCustomCharacterPart* OldPart, const UCustomCharacterPart* NewPart, EFortCustomPartType PartType);
    
    
    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    void SetCustomizationCosmeticItemAndVariants(UAthenaCosmeticItemDefinition* NewCosmeticItemDefinition, const TArray<FMcpVariantChannelInfo>& InOverrideVariants) override PURE_VIRTUAL(SetCustomizationCosmeticItemAndVariants,);
    
    UFUNCTION(BlueprintCallable)
    void ResetCustomizationCosmeticItemAndVariants(UAthenaCosmeticItemDefinition* NewCosmeticItemDefinition, const TArray<FMcpVariantChannelInfo>& InOverrideVariants) override PURE_VIRTUAL(ResetCustomizationCosmeticItemAndVariants,);
    
    UFUNCTION(BlueprintCallable)
    USceneComponent* GetCustomizationItemRotatableSceneComponent() const override PURE_VIRTUAL(GetCustomizationItemRotatableSceneComponent, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    UAthenaCosmeticItemDefinition* GetCustomizationCosmeticItem() const override PURE_VIRTUAL(GetCustomizationCosmeticItem, return NULL;);
    
};


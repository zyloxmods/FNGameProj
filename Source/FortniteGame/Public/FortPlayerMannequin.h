#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Animation/SkeletalMeshActor.h"
#include "GameplayTagContainer.h"
#include "CustomCharacterPartOwnerInterface.h"
#include "EFortCustomGender.h"
#include "EFortCustomPartType.h"
#include "McpVariantChannelInfo.h"
#include "MorphValuePair.h"
#include "FortPlayerMannequin.generated.h"

class UAthenaBackpackItemDefinition;
class UAthenaCharacterItemDefinition;
class UCustomCharacterPart;
class UCustomColorComponent;
class UCustomColorSwatch;
class UFortHeroType;
class USkeletalMesh;
class USkeletalMeshComponent;

UCLASS(Blueprintable, MinimalAPI)
class AFortPlayerMannequin : public ASkeletalMeshActor, public ICustomCharacterPartOwnerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortHeroType* CurrentFortHeroType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaCharacterItemDefinition* AthenaCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaBackpackItemDefinition* AthenaBackBling;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UCustomCharacterPart* CharacterParts[7];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLightingChannels MannequinLightingChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MannequinBoundsScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMannequinVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMannequinCastsHiddenShadow;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UCustomCharacterPart* CharacterPartList[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMcpVariantChannelInfo> OverrideVariants;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UCustomColorSwatch* CharacterPartColorSwatches[7];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UCustomColorSwatch* ColorSwatchesForCharacterParts[6];
    
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCustomColorComponent* AccessoryColorSwatchHandler[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UCustomColorSwatch* ColorSwatches[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* WeaponSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WeaponAttachSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorphValuePair> MorphTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInitialized;
    
public:
    AFortPlayerMannequin();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateMorphTargets();
    
public:
    UFUNCTION(BlueprintCallable)
    void ToggleGenderBP();
    
    UFUNCTION(BlueprintCallable)
    bool SetWeaponSkeletalMesh(USkeletalMesh* SkeletalMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetSkeletalMesh(USkeletalMesh* SkeletalMesh);
    
    UFUNCTION(BlueprintCallable)
    bool SetPart(EFortCustomPartType Part, UCustomCharacterPart* PartAsset);
    
    UFUNCTION(BlueprintCallable)
    void SetHeroType(UFortHeroType* NewHeroType);
    
    UFUNCTION(BlueprintCallable)
    void SetAthenaCharacterDefAndVariants(UAthenaCharacterItemDefinition* NewAthenaCharacter, const TArray<FMcpVariantChannelInfo>& InOverrideVariants);
    
    UFUNCTION(BlueprintCallable)
    bool RemovePart(EFortCustomPartType Part);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetPartSkeletalMeshComponent(EFortCustomPartType Part) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortCustomGender GetGender() const;
    
    UFUNCTION(BlueprintCallable)
    void GetAllPartSkeletalMeshComponents(TArray<USkeletalMeshComponent*>& SkeletalMeshComponents);
    
    UFUNCTION(BlueprintCallable)
    bool CyclePartBP(EFortCustomPartType Part, bool bNextPart);
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void PlayAnimationsMatchingQuery(const FGameplayTagQuery& TagQueryToMatch) override PURE_VIRTUAL(PlayAnimationsMatchingQuery,);
    
    UFUNCTION(BlueprintCallable)
    USkeletalMeshComponent* GetCustomizationRootSkeletalMeshComponent() const override PURE_VIRTUAL(GetCustomizationRootSkeletalMeshComponent, return NULL;);
    
};


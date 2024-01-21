#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "CustomPartMaterialOverrideData.h"
#include "CustomPartScalarParameter.h"
#include "CustomPartTextureParameter.h"
#include "CustomPartVectorParameter.h"
#include "EFortCustomBodyType.h"
#include "EFortCustomGender.h"
#include "EFortCustomPartType.h"
#include "CustomCharacterPart.generated.h"

class ACustomCharacterPartModifier;
class UAnimMontage;
class UCustomCharacterPartData;
class UFortMontageLookupTable;
class UMaterialInterface;
class USkeletalMesh;

UCLASS(Blueprintable)
class FORTNITEGAME_API UCustomCharacterPart : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortCustomGender GenderPermitted;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortCustomBodyType BodyTypesPermitted;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortCustomPartType CharacterPartType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PartTypeTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DisallowedCosmeticTags;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGameplayRelevantCosmeticPart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttachToSocket;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ACustomCharacterPartModifier> PartModifierBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCustomCharacterPartData* AdditionalData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortMontageLookupTable> DefaultMontageLookupTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortMontageLookupTable> OverrideMontageLookupTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> FrontendAnimMontageIdleOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrontEndBackPreviewRotationOffset;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> SkeletalMesh;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<USkeletalMesh>> MasterSkeletalMeshes;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSinglePieceMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportsColorSwatches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowStaticRenderPath;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomPartMaterialOverrideData> MaterialOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomPartTextureParameter> TextureParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomPartScalarParameter> ScalarParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomPartVectorParameter> VectorParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialOverrideFlags;
    
public:
    UCustomCharacterPart();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMesh* GetSkeletalMesh() const;
    
    UFUNCTION(BlueprintCallable)
    TMap<int32, UMaterialInterface*> GetMaterialOverridesByIndex();

    friend class UCustomCharacterPartThumbnailRenderer;
};


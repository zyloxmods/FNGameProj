#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "AthenaMemoryBudgetInterface.h"
#include "CustomPartMaterialOverrideData.h"
#include "CustomPartScalarParameter.h"
#include "CustomPartTextureParameter.h"
#include "CustomPartVectorParameter.h"
#include "CustomCharacterBackpackData.h"
#include "CustomCharacterBodyPartData.h"
#include "CustomCharacterHeadData.h"
#include "CustomCharacterCharmData.h"
#include "CustomCharacterHatData.h"
#include "CustomCharacterFaceData.h"
#include "EFortCustomBodyType.h"
#include "EFortCustomGender.h"
#include "EFortCustomPartType.h"
#include "Templates/SubclassOf.h"
#include "CustomCharacterPart.generated.h"

class AActor;
class UAnimMontage;
class UCustomCharacterPartData;
class UFoleySoundLibrary;
class UFortMontageLookupTable;
class UMarshalledVFX_AuthoredDataConfig;
class UMaterialInterface;
class UNiagaraSystem;
class UParticleSystem;
class USkeletalMesh;

UCLASS(Blueprintable)
class FORTNITEGAME_API UCustomCharacterPart : public UPrimaryDataAsset, public IAthenaMemoryBudgetInterface {
    GENERATED_BODY()
public:
    // TODO: Figure out how to move these to protected (since it's BlueprintReadOnly) or even to private and add
    // blueprint accessors instead.  Only one reference or so per variable still exists, but they use a macro that would
    // need to be replaced.
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Character Part")
    EFortCustomGender GenderPermitted;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Character Part")
    TEnumAsByte<EFortCustomBodyType::Type> BodyTypesPermitted;

    // TODO: Eventually this should be eliminated, with "GameplayTags" replacing it (along with adding other functionality).
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Character Part")
    EFortCustomPartType CharacterPartType;
    
private:
    //Gameplay tags to associate with this character part.  Can be used to label specific special-case usage such as ProhibitShadowStanceEffects.  Eventually should be used to label which part(s) of the body this part IS as well.  Will replace CharacterPartType (above) Examples: PartType.Body, PartType.Head, PartType.Hat, PartType.Backpack, etc.  Subtypes are also allowed, such as PartType.Hat.Helmet, etc.
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Character Part")
    FGameplayTagContainer GameplayTags;
    /** Tags that will determine if the art for this part can be shown on certain platforms or under special conditions (if any character part of a hero is disallowed, the entire hero will be replaced with a default hero) */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Character Part")
    FGameplayTagContainer DisallowedCosmeticTags;

    /** If this is true, this character part will be shown even if there is no more room in the budget for character parts. Use this ONLY for *gameplay relevant* parts, like the jetpack or you will make the game run out of memory on low-memory devices. */
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Character Part||Advanced")
    bool bGameplayRelevantCosmeticPart;

    /** Attach to the socket of the corresponding parent mesh (different part can attach to different parent mesh). 
     *  For example, for hat or face, it may look for socket in the head mesh first. 
     *  When that fails, it will look for the same socket in the next available parent mesh (i.e. Body). 
     *  When bAttachToSocket is false, it will just attach to the first parent mesh even if no socket is found. 
     */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Character Part")
    bool bAttachToSocket;

    /** If this is true, this part won't be created or loaded. Useful for performance reasons if this is just a placeholder. Parts attached to this part will fall back to the parent part. */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Character Part")
    bool bIgnorePart;
    
protected:
    //Blueprint to handle any special behavior of this part that is built-in.  Example: Light on a hardhat turning on at night; weapon glowing when enemies approach.
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Character Part|Art")
    TSoftClassPtr<AActor> PartModifierBlueprint;
    
    UPROPERTY(VisibleAnywhere, Instanced, meta=(AllowPrivateAccess=true), Category = "Character Part|Art")
    UCustomCharacterPartData* AdditionalData;

    //Shared lookup table for most montages this character part may play.  OverrideMontageLookupTable will be checked first.  If no match is found there, it will look for matches in this table.
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Character Part|Animation")
    TSoftObjectPtr<UFortMontageLookupTable> DefaultMontageLookupTable;

    //Optional override table for montages this character part wants special versions of.  While this can be shared, it's more likely to be unique than the Default table.  This table is checked first.  If it doesn't exist or doesn't have a montage matching a query, the Default Table will be searched next.
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Character Part|Animation")
    TSoftObjectPtr<UFortMontageLookupTable> OverrideMontageLookupTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Character Part|Animation")
    TSoftObjectPtr<UAnimMontage> FrontendAnimMontageIdleOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Character Part|Animation")
    float FrontEndBackPreviewRotationOffset;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Character Part|Art")
    TSoftObjectPtr<USkeletalMesh> SkeletalMesh;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Character Part|Art")
    TArray<TSoftObjectPtr<USkeletalMesh>> MasterSkeletalMeshes;

    /** If true, model is a single piece mesh, not broken up into different pieces. Only valid for CharacterPartType == EFortCustomPartType::Body*/
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Character Part|Art")
    bool bSinglePieceMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Character Part|Art")
    bool bSupportsColorSwatches;

    /**
     * Animation budget restriction stops some meshes ticking when under high-load situations (such as lots of nearby players). Enabling this flag
     * allows this part to reduce work even more by using the static render path (see USkeletalMeshCompoent::SetRenderStatic). NOTE: When this happens
     * the part will appear in its ref pose.
     */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Character Part|Animation")
    bool bAllowStaticRenderPath;
    
private:
    //Optional list of (material, material index) pairs to override the default materials on this character part's skeletal mesh.
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Character Part|Art")
    TArray<FCustomPartMaterialOverrideData> MaterialOverrides;

    //Optional list of (texture parameter name, texture) pairs to set in materials on this character part's skeletal mesh.
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Character Part|Art")
    TArray<FCustomPartTextureParameter> TextureParameters;

    //Optional list of (scalar parameter name, scalar value) pairs to set in materials on this character part's skeletal mesh.
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Character Part|Art")
    TArray<FCustomPartScalarParameter> ScalarParameters;

    //Optional list of (vector parameter name, vector value (i.e. linear color)) pairs to set in materials on this character part's skeletal mesh.
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Character Part|Art")
    TArray<FCustomPartVectorParameter> VectorParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Character Part|Art")
    TArray<TSubclassOf<UFoleySoundLibrary>> FoleyLibraries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Character Part|Art")
    int32 MaterialOverrideFlags;

    //Cascade Idle Effect
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Character Part|Effect")
    TSoftObjectPtr<UParticleSystem> IdleEffect;
    //Niagara Idle Effect
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Character Part|Effect")
    TSoftObjectPtr<UNiagaraSystem> IdleEffectNiagara;

    //// Socket to attach the Cascade or Niagara IdleFX. This socket is generally used by blueprint attachment logic
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Character Part|Effect")
    FName IdleFXSocketName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, NoClear, meta=(AllowPrivateAccess=true), Category = "Character Part|Art")
    UMarshalledVFX_AuthoredDataConfig* AuthoredData;
    
public:
    UCustomCharacterPart();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMesh* GetSkeletalMesh() const;
    friend class UFortHeroType;
    friend class UAthenaCharacterItemDefinition;
    UFUNCTION(BlueprintCallable)
    TMap<int32, UMaterialInterface*> GetMaterialOverridesByIndex();
    
    friend class UCustomCharacterPartThumbnailRenderer;
    friend class AFortPlayerMannequin;
    virtual FPrimaryAssetId GetPrimaryAssetId() const override
    {
        return FPrimaryAssetId("CharacterPart", GetFName());
    }

#if WITH_EDITOR
    void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) {
        FName PropertyName = (PropertyChangedEvent.Property != NULL) ? PropertyChangedEvent.Property->GetFName() : NAME_None;
        if (PropertyName == GET_MEMBER_NAME_CHECKED(UCustomCharacterPart, CharacterPartType)) {
            AdditionalData = NewObject<UCustomCharacterPartData>(this, 
                CharacterPartType == EFortCustomPartType::Head ?
                    UCustomCharacterHeadData::StaticClass() :
                CharacterPartType == EFortCustomPartType::Body ?
                    UCustomCharacterBodyPartData::StaticClass() :
                CharacterPartType == EFortCustomPartType::Hat ?
                    UCustomCharacterHatData::StaticClass() :
                CharacterPartType == EFortCustomPartType::Backpack ?
                    UCustomCharacterBackpackData::StaticClass() :
                CharacterPartType == EFortCustomPartType::Charm ?
                    UCustomCharacterCharmData::StaticClass() :
                CharacterPartType == EFortCustomPartType::Face ?
                    UCustomCharacterFaceData::StaticClass() :
                    UCustomCharacterBodyPartData::StaticClass()
                );
        }
    }
#endif
};


#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AthenaCharacterTaggedPartsList.h"
#include "AthenaCosmeticItemDefinition.h"
#include "EFortCustomGender.h"
#include "EFortCustomPartType.h"
#include "Animation/PreviewCollectionInterface.h"
#include "AthenaCharacterItemDefinition.generated.h"

class UAthenaBackpackItemDefinition;
class UFortFeedbackBank;
class UFortHeroType;
class UMarshalledVFX_AuthoredDataConfig;

UCLASS(Blueprintable, MinimalAPI)
class UAthenaCharacterItemDefinition : public UAthenaCosmeticItemDefinition, public IPreviewCollectionInterface {
    GENERATED_BODY()
public:
    /** 
     * The list of data stores we would like to exist on our owning controller. Note: Data stores have no replication capacity!
     * These should be lightweight objects - they will be created for the purpose of housing data, and should do nothing on their own.
     **/
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Character")
    TMap<FName, UClass*> RequestedDataStores;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NoClear, meta=(AllowPrivateAccess=true), Category = "Character")
    TMap<EFortCustomPartType, UMarshalledVFX_AuthoredDataConfig*> AuthoredVFXData_ByPart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Hero Type")
    UFortHeroType* HeroDefinition;

    // The default backpack for this hero, if it comes with one
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Hero Type")
    UAthenaBackpackItemDefinition* DefaultBackpack;

    // Items in this list are required to be loaded along with the character assets.
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Character")
    TArray<UAthenaCosmeticItemDefinition*> RequiredCosmeticItems;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Character")
    EFortCustomGender Gender;
    //Voice information for current hero.
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Feedback")
    TSoftObjectPtr<UFortFeedbackBank> FeedbackBank;

    /**
     *	When swapping parts from either a mutator or a gadget, look in this map if a UniqueFit meta tag was present.
     *	The tag corresponds to the "theme" of the swap.
     */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Character")
    TMap<FGameplayTag, FAthenaCharacterTaggedPartsList> TaggedPartsOverride;
    
public:
    UAthenaCharacterItemDefinition(const FObjectInitializer& ObjectInitializer);
    virtual USkeletalMesh* GetPreviewBaseMesh() const override;
    virtual void GetPreviewSkeletalMeshes(TArray<USkeletalMesh*>& OutMeshes, TArray<TSubclassOf<UAnimInstance>>& OutAnimClasses) const override;
    virtual FPrimaryAssetId GetPrimaryAssetId() const override
    {
        return FPrimaryAssetId("AthenaCharacter", GetFName());
    }
};


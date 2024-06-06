#include "FortHeroType.h"

#include "CustomCharacterPart.h"
#include "FortHeroSpecialization.h"
#include "Templates/SubclassOf.h"
#include "GameplayTagContainer.h"
#include "GameplayTagsManager.h"

FText UFortHeroType::GetSubType() const {
    return FText::GetEmpty();
}

UFortHeroGameplayDefinition* UFortHeroType::GetHeroGameplayDefinition() {
    return NULL;
}

UAnimMontage* UFortHeroType::GetFrontendAnimMontageIdleOverride() const {
    return NULL;
}

TSubclassOf<UFrontendAnimInstance> UFortHeroType::GetFrontendAnimClass() const {
    return NULL;
}

UFortHeroType::UFortHeroType(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer){
    bForceShowHeadAccessory = false;
    bForceShowBackpack = false;
    HeroGameplayDefinition = NULL;
    HeroCosmeticOutfitDefinition = NULL;
    HeroCosmeticBackblingDefinition = NULL;
    FrontEndBackPreviewRotationOffset = 1;
    ItemType = EFortItemType::Hero;
    RequiredGPTags.AddTag(FGameplayTag::RequestGameplayTag(FName("Unlocks.Class.Commando")));
}

USkeletalMesh* UFortHeroType::GetPreviewBaseMesh() const
{
    if (Specializations.Num() == 0) return nullptr;
    for (const TSoftObjectPtr<UFortHeroSpecialization>& Specialization : this->Specializations)
    {
        if (UFortHeroSpecialization* FortHeroSpecialization = Specialization.LoadSynchronous())
        {
            for (const TSoftObjectPtr<UCustomCharacterPart>& CharacterPart : FortHeroSpecialization->CharacterParts)
            {
                if (UCustomCharacterPart* CustomCharacterPart = CharacterPart.LoadSynchronous())
                {
                    if (CustomCharacterPart->CharacterPartType == EFortCustomPartType::Body && 
                        CustomCharacterPart->MasterSkeletalMeshes.Num() > 0)
                    {
                        if (USkeletalMesh* SkeletalMesh = CustomCharacterPart->MasterSkeletalMeshes[0].LoadSynchronous())
                        {
                            return SkeletalMesh;
                        }
                    }
                }
            }
        }
    }
    return nullptr;
}

void UFortHeroType::GetPreviewSkeletalMeshes(TArray<USkeletalMesh*>& OutMeshes, TArray<TSubclassOf<UAnimInstance>>& OutAnimClasses) const
{
    if (Specializations.Num() == 0) return;
    for (const TSoftObjectPtr<UFortHeroSpecialization>& Specialization : this->Specializations)
    {
        if (UFortHeroSpecialization* FortHeroSpecialization = Specialization.LoadSynchronous())
        {
            for (const TSoftObjectPtr<UCustomCharacterPart>& CharacterPart : FortHeroSpecialization->CharacterParts)
            {
                if (const UCustomCharacterPart* CustomCharacterPart = CharacterPart.LoadSynchronous())
                {
                    if (USkeletalMesh* SkeletalMesh = CustomCharacterPart->SkeletalMesh.LoadSynchronous())
                    {
                        OutMeshes.Add(SkeletalMesh);
                    }
                    if (const UCustomCharacterBodyPartData* BodyPartData = Cast<UCustomCharacterBodyPartData>(CustomCharacterPart->AdditionalData))
                    {
                        if (UClass* AnimClass = BodyPartData->AnimClass.LoadSynchronous())
                        {
                            OutAnimClasses.Add(AnimClass);
                        }
                    }
                    if (const UCustomCharacterAccessoryData* AccessoryData = Cast<UCustomCharacterAccessoryData>(CustomCharacterPart->AdditionalData))
                    {
                        if (UClass* AnimClass = AccessoryData->AnimClass.LoadSynchronous())
                        {
                            OutAnimClasses.Add(AnimClass);
                        }
                    }
                }
            }
        }
    }
}

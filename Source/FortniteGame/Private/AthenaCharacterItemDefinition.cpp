#include "AthenaCharacterItemDefinition.h"
#include "CustomCharacterPart.h"
#include "FortHeroType.h"
#include "FortHeroSpecialization.h"

UAthenaCharacterItemDefinition::UAthenaCharacterItemDefinition(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
    HeroDefinition = nullptr;
    DefaultBackpack = nullptr;
    ItemType = EFortItemType::AthenaCharacter;
}

USkeletalMesh* UAthenaCharacterItemDefinition::GetPreviewBaseMesh() const
{
    if (!HeroDefinition) return nullptr;

    for (const TSoftObjectPtr<UFortHeroSpecialization>& Specialization : HeroDefinition->Specializations)
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

void UAthenaCharacterItemDefinition::GetPreviewSkeletalMeshes(TArray<USkeletalMesh*>& OutMeshes, TArray<TSubclassOf<UAnimInstance>>& OutAnimClasses) const
{
    if (!HeroDefinition) return;

    for (const TSoftObjectPtr<UFortHeroSpecialization>& Specialization : HeroDefinition->Specializations)
    {
        if (UFortHeroSpecialization* FortHeroSpecialization = Specialization.LoadSynchronous())
        {
            for (const TSoftObjectPtr<UCustomCharacterPart>& CharacterPart : FortHeroSpecialization->CharacterParts)
            {
                if (UCustomCharacterPart* CustomCharacterPart = CharacterPart.LoadSynchronous())
                {
                    if (USkeletalMesh* SkeletalMesh = CustomCharacterPart->SkeletalMesh.LoadSynchronous())
                    {
                        OutMeshes.Add(SkeletalMesh);
                    }

                    if (UCustomCharacterBodyPartData* BodyPartData = Cast<UCustomCharacterBodyPartData>(CustomCharacterPart->AdditionalData))
                    {
                        if (UClass* AnimClass = BodyPartData->AnimClass.LoadSynchronous())
                        {
                            OutAnimClasses.Add(AnimClass);
                        }
                    }
                    if (UCustomCharacterAccessoryData* AccessoryData = Cast<UCustomCharacterAccessoryData>(CustomCharacterPart->AdditionalData))
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
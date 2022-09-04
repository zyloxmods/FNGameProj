// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.


// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Customization/FortPlayerMannequin.h"

#include "Customization/CustomCharacterPartData.h"

void AFortPlayerMannequin::OnConstruction(const FTransform& Transform)
{
	if (CurrentFortHeroType != nullptr)
	{
		for (TSoftObjectPtr<class UFortHeroSpecialization> SoftHeroSpecialization : CurrentFortHeroType->Specializations)
		{
			UFortHeroSpecialization* HeroSpecialization = SoftHeroSpecialization.Get();

			if (HeroSpecialization == nullptr)
			{
				HeroSpecialization = static_cast<UFortHeroSpecialization*>(SoftHeroSpecialization.ToSoftObjectPath().TryLoad());

				// If HeroSpecialization is finally loaded, let's attempt to Set Character Parts again.
				if (HeroSpecialization != nullptr)
				{
					SetPartsFromHeroSpecialization(HeroSpecialization);
				}
			}
			else
			{
				SetPartsFromHeroSpecialization(HeroSpecialization);
			}
		}
	}
}

void AFortPlayerMannequin::SetPartsFromHeroSpecialization(UFortHeroSpecialization* HeroSpecialization)
{
	// Reset the character parts
	ResetParts();

	// Loop thru character parts of providen HeroSpecialization
	int CharacterPartCurrentArrayIndex = -1;

	for (TSoftObjectPtr<class UCustomCharacterPart> SoftCharacterPart : HeroSpecialization->CharacterParts)
	{
		CharacterPartCurrentArrayIndex++;
		UCustomCharacterPart* CustomCharacterPart = SoftCharacterPart.Get();

		// If the character part pointer is null, try loading it
		if (CustomCharacterPart == nullptr)
		{
			CustomCharacterPart = static_cast<UCustomCharacterPart*>(SoftCharacterPart.ToSoftObjectPath().TryLoad());
		}

		EFortCustomPartType CharacterPartType = CustomCharacterPart->CharacterPartType.GetValue();

		/* Remove old Character Part's that have nothing to do with this Hero Specialization */
		if (CharacterPartList[static_cast<int>(CharacterPartType)] != CustomCharacterPart)
		{
			CharacterPartList[static_cast<int>(CharacterPartType)] = nullptr;
		}
		if (CharacterParts[CharacterPartCurrentArrayIndex] != CustomCharacterPart)
		{
			CharacterPartList[CharacterPartCurrentArrayIndex] = nullptr;
		}

		/* Set Character Parts */
		CharacterPartList[static_cast<int>(CharacterPartType)] = CustomCharacterPart;
		CharacterParts[CharacterPartCurrentArrayIndex] = CustomCharacterPart;

		if (CustomCharacterPart != nullptr)
		{
			/* Create the mesh component */
			USkeletalMeshComponent* MeshComponent = NewObject<USkeletalMeshComponent>(this, "CharacterPartMeshComponent" + CharacterPartCurrentArrayIndex);
			MeshComponent->SetupAttachment(this->GetRootComponent());
			MeshComponent->RegisterComponent();

			/* Additional Data implementation */
			UClass* AnimClass = nullptr;
			FName AttachSocketName;
			UCustomAccessoryAttachmentData* AttachmentOverrideData;

			UCustomCharacterBodyPartData* BodyPartData = Cast<UCustomCharacterBodyPartData>(CustomCharacterPart->AdditionalData);

			if (BodyPartData) {
				AnimClass = BodyPartData->AnimClass;
			}

			UCustomCharacterAccessoryData* AccessoryData = Cast<UCustomCharacterAccessoryData>(CustomCharacterPart->AdditionalData);

			if (AccessoryData) {
				AnimClass = AccessoryData->AnimClass;
				AttachSocketName = AccessoryData->AttachSocketName;
				AttachmentOverrideData = AccessoryData->AttachmentOverrideData;

				MeshComponent->AttachTo(this->GetRootComponent(), AttachSocketName);
			}

			if (AnimClass != nullptr) {
				MeshComponent->SetAnimInstanceClass(AnimClass);
			}

			/* Set skeletal mesh */
			USkeletalMesh* CharacterPartSkeletalMesh = CustomCharacterPart->SkeletalMesh.Get();

			if (CustomCharacterPart->SkeletalMesh.Get() == nullptr)
			{
				CharacterPartSkeletalMesh = static_cast<USkeletalMesh*>(CustomCharacterPart->SkeletalMesh.ToSoftObjectPath().TryLoad());
			}

			if (CharacterPartSkeletalMesh != nullptr)
			{
				MeshComponent->SetSkeletalMesh(CharacterPartSkeletalMesh, true);
			}
		}
	}
}

void AFortPlayerMannequin::ResetParts()
{
	/* Get all the children components of the master skeletal mesh */
	TArray<USceneComponent*> SceneComponents;
	this->GetRootComponent()->GetChildrenComponents(true, SceneComponents);

	for (auto Component : SceneComponents)
	{
		// Unregister the component
		Component->UnregisterComponent();
		// Remove it from root
		Component->RemoveFromRoot();
		// Destroy it
		Component->DestroyComponent();
	}
}
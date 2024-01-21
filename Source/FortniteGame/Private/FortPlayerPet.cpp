#include "FortPlayerPet.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "Components/SphereComponent.h"

void AFortPlayerPet::ResetPetMaterials() {
}

void AFortPlayerPet::ReInitPetDisplay() {
}


void AFortPlayerPet::OnRequestedCustomizationComplete(AFortPlayerPawn* Pawn) {
}

void AFortPlayerPet::InitalizeFromItemDef(const UAthenaPetItemDefinition* InPetItemDef) {
}

AFortPlayerPawn* AFortPlayerPet::GetFortPlayerPawn() const {
    return NULL;
}

AFortPlayerPet::AFortPlayerPet() {
    this->PetItemDef = NULL;
    this->PetAudioComponent = NULL;
    this->bIsFrontEndPreview = false;
    this->PetMesh = CreateDefaultSubobject<USkeletalMeshComponentBudgeted>(TEXT("PetMesh0"));
    this->InteractionCollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("InteractionCollisionSphere"));
    this->SoundBank = NULL;
}


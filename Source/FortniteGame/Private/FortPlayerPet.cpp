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
    PetItemDef = NULL;
    PetAudioComponent = NULL;
    bIsFrontEndPreview = false;
    PetMesh = CreateDefaultSubobject<USkeletalMeshComponentBudgeted>(TEXT("PetMesh0"));
    InteractionCollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("InteractionCollisionSphere"));
    SoundBank = NULL;
}


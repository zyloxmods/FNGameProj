#include "CustomCharacterPart.h"

USkeletalMesh* UCustomCharacterPart::GetSkeletalMesh() const {
    return SkeletalMesh.Get();
}

TMap<int32, UMaterialInterface*> UCustomCharacterPart::GetMaterialOverridesByIndex() {
    return TMap<int32, UMaterialInterface*>();
}

UCustomCharacterPart::UCustomCharacterPart() {
    this->GenderPermitted = EFortCustomGender::Male;
    this->BodyTypesPermitted = EFortCustomBodyType::All;
    this->CharacterPartType = EFortCustomPartType::Head;
    this->bGameplayRelevantCosmeticPart = false;
    this->bAttachToSocket = true;
    this->bIgnorePart = false;
    this->AdditionalData = NULL;
    this->FrontEndBackPreviewRotationOffset = 1;
    this->bSinglePieceMesh = false;
    this->bSupportsColorSwatches = true;
    this->bAllowStaticRenderPath = false;
    this->MaterialOverrideFlags = 0;
    this->AuthoredData = NULL;
}


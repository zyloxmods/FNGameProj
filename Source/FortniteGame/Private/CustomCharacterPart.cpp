#include "CustomCharacterPart.h"

USkeletalMesh* UCustomCharacterPart::GetSkeletalMesh() const {
    return SkeletalMesh.Get();
}

TMap<int32, UMaterialInterface*> UCustomCharacterPart::GetMaterialOverridesByIndex() {
    return TMap<int32, UMaterialInterface*>();
}

UCustomCharacterPart::UCustomCharacterPart() {
    GenderPermitted = EFortCustomGender::Male;
    BodyTypesPermitted = EFortCustomBodyType::All;
    CharacterPartType = EFortCustomPartType::Head;
    bGameplayRelevantCosmeticPart = false;
    bAttachToSocket = true;
    bIgnorePart = false;
    AdditionalData = NULL;
    FrontEndBackPreviewRotationOffset = 1;
    bSinglePieceMesh = false;
    bSupportsColorSwatches = true;
    bAllowStaticRenderPath = false;
    MaterialOverrideFlags = 0;
    AuthoredData = NULL;
}


#include "FortObjectMoverInputComponent.h"

void UFortObjectMoverInputComponent::PushTranslationInputMode(APlayerController* PlayerController) {
}

void UFortObjectMoverInputComponent::PushScaleInputMode(APlayerController* PlayerController) {
}

void UFortObjectMoverInputComponent::PushRotationInputMode(APlayerController* PlayerController) {
}

void UFortObjectMoverInputComponent::PushPropPossessorEquippedInputComponent(APlayerController* PlayerController) {
}

void UFortObjectMoverInputComponent::PushPlaysetPreviewInputMode(APlayerController* PlayerController) {
}

void UFortObjectMoverInputComponent::PushMultiSelectMoveObjectsFreelyModeInputComponent(APlayerController* PlayerController) {
}

void UFortObjectMoverInputComponent::PushMultiSelectMoveBuildingsOnGridModeInputComponent(APlayerController* PlayerController) {
}

void UFortObjectMoverInputComponent::PushMoveObjectsFreelyInputMode(APlayerController* PlayerController) {
}

void UFortObjectMoverInputComponent::PushMoveBuildingsOnGridInputMode(APlayerController* PlayerController) {
}

void UFortObjectMoverInputComponent::PushEmptyInputMode(APlayerController* PlayerController) {
}

void UFortObjectMoverInputComponent::PushCreativeMoveToolEquippedInputComponent(APlayerController* PlayerController) {
}

void UFortObjectMoverInputComponent::PopTranslationInputMode(APlayerController* PlayerController) {
}

void UFortObjectMoverInputComponent::PopScaleInputMode(APlayerController* PlayerController) {
}

void UFortObjectMoverInputComponent::PopRotationInputMode(APlayerController* PlayerController) {
}

void UFortObjectMoverInputComponent::PopPropPossessorEquippedInputComponent(APlayerController* PlayerController) {
}

void UFortObjectMoverInputComponent::PopPlaysetPreviewInputMode(APlayerController* PlayerController) {
}

void UFortObjectMoverInputComponent::PopMultiSelectMoveObjectsFreelyModeInputComponent(APlayerController* PlayerController) {
}

void UFortObjectMoverInputComponent::PopMultiSelectMoveBuildingsOnGridModeInputComponent(APlayerController* PlayerController) {
}

void UFortObjectMoverInputComponent::PopMoveObjectsFreelyInputMode(APlayerController* PlayerController) {
}

void UFortObjectMoverInputComponent::PopMoveBuildingsOnGridInputMode(APlayerController* PlayerController) {
}

void UFortObjectMoverInputComponent::PopEmptyInputMode(APlayerController* PlayerController) {
}

void UFortObjectMoverInputComponent::PopCreativeMoveToolEquippedInputComponent(APlayerController* PlayerController) {
}

void UFortObjectMoverInputComponent::PopAllInputModes(APlayerController* PlayerController) {
}

bool UFortObjectMoverInputComponent::IsEmptyInputComponentActive() {
    return false;
}

UFortObjectMoverInputComponent::UFortObjectMoverInputComponent() {
    OwningPC = NULL;
    CreativeMoveToolEquippedInputComponent = NULL;
    PropPossessorEquippedInputComponent = NULL;
    MoveObjectsFreelyModeInputComponent = NULL;
    MultiSelectMoveObjectsFreelyModeInputComponent = NULL;
    MoveBuildingsOnGridModeInputComponent = NULL;
    MultiSelectMoveBuildingsOnGridModeInputComponent = NULL;
    TranslationInputComponent = NULL;
    RotationInputComponent = NULL;
    ScaleInputComponent = NULL;
    EmptyInputComponent = NULL;
    PlaysetPreviewModeInputComponent = NULL;
}


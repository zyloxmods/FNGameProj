#include "FortAnimationBlueprintLibrary.h"

void UFortAnimationBlueprintLibrary::UpdateAnimSpinner(FAnimSpinner& SpinInformation, float DeltaSeconds, float NewRotationRate) {
}

float UFortAnimationBlueprintLibrary::GetRelevantAnimTimeRemainingFromCachedData(FCachedAnimRelevancyData& InCachedAnimRelevancyData, UAnimInstance* InAnimInstance) {
    return 0.0f;
}

float UFortAnimationBlueprintLibrary::GetRelevantAnimTimeRemainingFractionFromCachedData(FCachedAnimRelevancyData& InCachedAnimRelevancyData, UAnimInstance* InAnimInstance) {
    return 0.0f;
}

float UFortAnimationBlueprintLibrary::GetRelevantAnimTimeFromCachedData(FCachedAnimRelevancyData& InCachedAnimRelevancyData, UAnimInstance* InAnimInstance) {
    return 0.0f;
}

void UFortAnimationBlueprintLibrary::GetAlphaFromReferenceTransformDelta(float& AlphaOutput, float& RawOutput, const USkinnedMeshComponent* SkeletalMeshComponent, const FName BoneName, const FName BaseName, TEnumAsByte<EAlphaFromDeltaTypes::Type> DeltaComponentType, FVector2D InputRange, FVector2D OutputRange, FVector TwistAxis) {
}

UFortAnimationBlueprintLibrary::UFortAnimationBlueprintLibrary() {
}


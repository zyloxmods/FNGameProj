#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneCaptureComponent2D.h"
#include "ARScreenCaptureComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UARScreenCaptureComponent : public USceneCaptureComponent2D {
    GENERATED_BODY()
public:
    UARScreenCaptureComponent();
    UFUNCTION(BlueprintCallable)
    void UpdateScreenProjectionMatrix(const FVector& ViewLocation, const FVector& PlaneLocation, const FRotator& PlaneRotation, const FVector2D& PlaneSize);
    
};


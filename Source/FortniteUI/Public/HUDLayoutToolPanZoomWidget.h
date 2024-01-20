#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ContentWidget.h"
#include "HUDLayoutToolPanZoomWidget.generated.h"

UCLASS(Blueprintable)
class UHUDLayoutToolPanZoomWidget : public UContentWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LerpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RecenterRadius;
    
    UHUDLayoutToolPanZoomWidget();
    UFUNCTION(BlueprintCallable)
    void StopOffsetLerp();
    
    UFUNCTION(BlueprintCallable)
    void StartOffsetLerp(FVector2D NewTargetOffset);
    
    UFUNCTION(BlueprintCallable)
    void Recenter();
    
};


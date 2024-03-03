#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ContentWidget.h"
#include "FortSwipeDetector.h"
#include "OnFortSwipeEventDelegate.h"
#include "FortSwipePanel.generated.h"

UCLASS(Blueprintable)
class UFortSwipePanel : public UContentWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D SwipeThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBeginSwipeOnPointerEnter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConsumePointerInput;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFortSwipeEvent BP_OnSwipeLeft;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFortSwipeEvent BP_OnSwipeRight;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFortSwipeEvent BP_OnSwipeUp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFortSwipeEvent BP_OnSwipeDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortSwipeDetector SwipeDetector;
    
public:
    UFortSwipePanel();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSwipeInfo(int32& OutIndex, FVector2D& OutSwipePercentage) const;
    
};


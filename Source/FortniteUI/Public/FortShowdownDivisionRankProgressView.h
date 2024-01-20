#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortShowdownDivisionRankProgressView.generated.h"

class UFortLazyImage;
class UProgressBar;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortShowdownDivisionRankProgressView : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLazyImage* Image_DivisionIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* Bar_DivisionProgress;
    
public:
    UFortShowdownDivisionRankProgressView();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetInProgress(float NewPercent, bool bIsInProgress);
    
};


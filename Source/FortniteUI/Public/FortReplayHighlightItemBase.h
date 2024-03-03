#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "EHighlightReelTypes.h"
#include "Styling/SlateBrush.h"
#include "FortReplayHighlightItemBase.generated.h"

class UImage;
class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortReplayHighlightItemBase : public UCommonButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock_Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHighlightReelTypes, FSlateBrush> IconMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush DefaultIcon;
    
public:
    UFortReplayHighlightItemBase();
    UFUNCTION(BlueprintCallable)
    void HandlePlayItemClicked();
    
};


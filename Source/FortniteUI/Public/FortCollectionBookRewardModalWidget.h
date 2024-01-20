#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanel.h"
#include "FortCollectionBookRewardModalWidget.generated.h"

class UCommonTextBlock;
class UFortMaterialProgressBar;
class UFortRewardInfoWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCollectionBookRewardModalWidget : public UCommonActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* TitleWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortRewardInfoWidget* RewardWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMaterialProgressBar* ProgressBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* ProgressTextWidget;
    
public:
    UFortCollectionBookRewardModalWidget();
};


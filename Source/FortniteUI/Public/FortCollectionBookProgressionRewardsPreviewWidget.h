#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortCollectionBookProgressionRewardsPreviewWidget.generated.h"

class UFortCollectionBookProgressionRewardWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCollectionBookProgressionRewardsPreviewWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCollectionBookProgressionRewardWidget* NextRewardWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCollectionBookProgressionRewardWidget* NextMajorRewardWidget;
    
public:
    UFortCollectionBookProgressionRewardsPreviewWidget();
};


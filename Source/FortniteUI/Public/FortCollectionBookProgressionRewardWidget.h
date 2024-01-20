#pragma once
#include "CoreMinimal.h"
#include "FortCollectionBookGenericRewardWidget.h"
#include "FortCollectionBookProgressionRewardWidget.generated.h"

class UCommonNumericTextBlock;
class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCollectionBookProgressionRewardWidget : public UFortCollectionBookGenericRewardWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonNumericTextBlock* LevelTextWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* DisplayNameWidget;
    
public:
    UFortCollectionBookProgressionRewardWidget();
    UFUNCTION(BlueprintCallable)
    void SetAssociatedLevel(int32 Level);
    
};


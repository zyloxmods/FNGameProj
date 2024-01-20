#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortCollectionBookProgressionRewardDetailInspectWidget.generated.h"

class UCommonNumericTextBlock;
class UFortRewardInfoWidget;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCollectionBookProgressionRewardDetailInspectWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonNumericTextBlock* LevelTextWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortRewardInfoWidget* RewardWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* CheckmarkImage;
    
public:
    UFortCollectionBookProgressionRewardDetailInspectWidget();
    UFUNCTION(BlueprintCallable)
    void SetAssociatedLevel(int32 Level);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnXPRequiredChanged(int32 NewXPRequired);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetXPRequired() const;
    
};


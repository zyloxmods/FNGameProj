#pragma once
#include "CoreMinimal.h"
#include "NitrogenWidgetBase.h"
#include "NitrogenMatchNearEndWidget.generated.h"

class UCommonTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class NITROGENUI_API UNitrogenMatchNearEndWidget : public UNitrogenWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* PointsFromWinningText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EnemyTeamWinningDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PlayerTeamWinningDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMatchNearEnd;
    
public:
    UNitrogenMatchNearEndWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMatchNearEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleTopScoreUpdated();
    
};


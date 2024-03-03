#pragma once
#include "CoreMinimal.h"
#include "CobaltWidgetRoundData.h"
#include "CobaltPlayerPortraitIndexInfo.h"
#include "CobaltWidgetBase.h"
#include "CobaltRoundStartWidgetBase.generated.h"

class UCobaltPlayerPortraitWidget;

UCLASS(Blueprintable, EditInlineNew)
class UCobaltRoundStartWidgetBase : public UCobaltWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCobaltPlayerPortraitIndexInfo> UpperBannerPortraitIndexInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCobaltPlayerPortraitIndexInfo> LowerBannerPortraitIndexInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCobaltPlayerPortraitWidget*> PlayerPortraits_Team1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCobaltPlayerPortraitWidget*> PlayerPortraits_Team2;
    
public:
    UCobaltRoundStartWidgetBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleUpdateVsInfo_BP(int32 CurrentActiveRound, const FText& RoundName, const FText& POIName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleUpdateRoundStartWidgetVisibility_BP(bool bNewVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleUpdateIntelInfo_BP(int32 CurrentRound, uint8 LastRoundWinningTeam);
    
    UFUNCTION(BlueprintCallable)
    void HandleShowRoundStartWidget(const FCobaltWidgetRoundData& RoundData);
    
    UFUNCTION(BlueprintCallable)
    void HandleHideRoundStartWidget();
    
};


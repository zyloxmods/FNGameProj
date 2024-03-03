#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "MinigameActivityEndedData.h"
#include "MinigameActivityStartedData.h"
#include "AthenaMinigameActivityWidget.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaMinigameActivityWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FText StatFormats[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ScoreFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText AddTimeFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ActivityName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Stat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_AddTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Score;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMinigameActive;
    
public:
    UAthenaMinigameActivityWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnHandleMinigameTimeChanged(float Time, float Delta);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnHandleMinigameStarted(const FMinigameActivityStartedData& StartData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnHandleMinigameScoreChanged(int32 CurrentScore, int32 TotalScore);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnHandleMinigameRankChanged(int32 Rank);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnHandleMinigameEnded(const FMinigameActivityEndedData& EndData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnHandleMinigameDistanceChanged(float Distance);
    
};


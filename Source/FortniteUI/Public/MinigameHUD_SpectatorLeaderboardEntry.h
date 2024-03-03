#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "ESpectatorLeaderboardEntryType.h"
#include "Templates/SubclassOf.h"
#include "MinigameHUD_SpectatorLeaderboardEntry.generated.h"

class UCommonTextBlock;
class UFortMinigameTeamIdentification;
class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UMinigameHUD_SpectatorLeaderboardEntry : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Standing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Avatar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_BackgroundBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_BackgroundShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_BackgroundShape_Bottom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Score;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_EndScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ScoreOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ScoreTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_SmallScoreTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortMinigameTeamIdentification> CachedMinigameTeamIdClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESpectatorLeaderboardEntryType CachedEntryType;
    
public:
    UMinigameHUD_SpectatorLeaderboardEntry();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCoinVisibility(bool bVisible);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStandingChanged(int32 Standing, int32 Score);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisplayTypeChanged(ESpectatorLeaderboardEntryType EntryType);
    
};


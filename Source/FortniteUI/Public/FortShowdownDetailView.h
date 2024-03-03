#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ETimespanAsTextFormat.h"
#include "FortShowdownScoringRuleInfo.h"
#include "Layout/Margin.h"
#include "EFortDateTimeStyle.h"
#include "EFortEventWindowEligibility.h"
#include "EFortShowdownEventState.h"
#include "EFortShowdownMatchType.h"
#include "EFortShowdownPinState.h"
#include "FortShowdownEventBestResultsSummary.h"
#include "FortTournamentDisplayInfo.h"
#include "ShowdownTournamentEntry.h"
#include "FortShowdownDetailView.generated.h"

class UCommonTextBlock;
class UEpicCMSImage;
class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortShowdownDetailView : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortTournamentDisplayInfo TournamentDisplayInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShowdownTournamentEntry CMSTournamentData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_TimeRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_DebugId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEpicCMSImage* Image_PosterFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEpicCMSImage* Image_PosterBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEpicCMSImage* Image_LoadingScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEpicCMSImage* Image_PlaylistTile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TimeRemainingFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTimeRemainingShowSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTimeRemainingUppercase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETimespanAsTextFormat TimeRemainingFormatType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin TitlePaddingMobile;
    
public:
    UFortShowdownDetailView();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowCrossplayError() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTournament(const FString& TournamentId, const FString& EventId);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshDataBP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWorldCupQualifierEvent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFloatingLeaderboardAvailable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEventLeaderboardAvailable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasScoreInEvent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetWindowSessionDisplayString() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetWindowRoundDisplayString() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetWindowRoundAndSessionDisplayString() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortShowdownEventState GetTournamentTimeState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimespan GetTournamentTimeLeft() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetTournamentSeriesId();
    
    UFUNCTION(BlueprintCallable)
    TArray<FFortShowdownScoringRuleInfo> GetTournamentScoringRules();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTournamentPinUnlockScore() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTournamentNextEvent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortShowdownMatchType GetTournamentMatchType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTournamentMatchCap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTournamentId() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetTournamentEvents();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDateTime GetTournamentEndTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortEventWindowEligibility GetTournamentEligibility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTournamentBestScore() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortShowdownPinState GetTournamentBestPinState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDateTime GetTournamentBeginTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumEventRounds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEventWindowSessionNumber() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEventWindowRoundNumber() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortEventWindowEligibility GetEventWindowEligibility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortShowdownEventState GetEventTimeState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetEventTimespanAsText(FTimespan InTimeRemaining, bool bShowSeconds, ETimespanAsTextFormat FormatType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimespan GetEventTimeLeft() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetEventTimeAsText(FDateTime DateTime, EFortDateTimeStyle Style) const;
    
    UFUNCTION(BlueprintCallable)
    FFortShowdownEventBestResultsSummary GetEventResultsSummary();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortShowdownEventState GetEventPlayerParticipationState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortShowdownPinState GetEventPinState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEventLeaderboardRank() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEventLeaderboardPercentile() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetEventIdForEligibilityToken(const FString& Token) const;
    
    UFUNCTION(BlueprintCallable)
    FString GetEventId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDateTime GetEventEndTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetEventDateAsText(FDateTime DateTime, EFortDateTimeStyle Style) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDateTime GetEventBeginTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCurrentRegionName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentEventTeamNumMatchesPlayed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentEventScore() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBestEventScore() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoDisplayRoundNumber() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoCalloutMFARequirement() const;
    
    UFUNCTION(BlueprintCallable)
    FLinearColor ConvertCMSStringToColor(const FString& ColorString);
    
};


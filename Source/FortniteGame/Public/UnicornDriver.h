#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "EAthenaGamePhase.h"
#include "UnicornDriver.generated.h"

class UUnicornSocialComponent;
class UUnicornWebAPIComponent;
class UWorld;

UCLASS(Blueprintable, Config=Game)
class AUnicornDriver : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnable_MainHighlightReel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnable_ShorterExtendedHighlightReel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnable_ShortHighlightReel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnable_ShortExtendedHighlightReel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnable_MediumHighlightReel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnable_MediumExtendedighlightReel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnable_PlayerSpotlightReel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnable_PlayerSpotlightNoDeathsReel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnable_VATReel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShorterReelMaxClipDuration;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShorterReelMaxLookback;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShorterReelMaxTailTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShorterReelEliminationLookbackTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShortReelMaxClipDuration;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShortReelMaxLookback;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShortReelMaxTailTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShortReelEliminationLookbackTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShortExtendedReelMaxClipDuration;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShortExtendedReelMaxLookback;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShortExtendedReelMaxTailTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShortExtendedReelEliminationLookbackTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MediumReelMaxClipDuration;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MediumReelMaxLookback;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MediumReelMaxTailTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MediumExtendedReelMaxClipDuration;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MediumExtendedReelMaxLookback;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MediumExtendedReelMaxTailTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VATReelEliminationLookbackTime;
    
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxHighlightsToSave;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinHighlightScore;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultShotLeadTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultShotTailTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HighlightAnnotationTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinimumPlacementForHighlight;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnicornSocialComponent* SocialComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUnicornWebAPIComponent* WebAPIComponent;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldUploadHighlightsPayload;
    
public:
    AUnicornDriver();
    UFUNCTION(BlueprintCallable, Exec)
    void UnicornStopStreamRecording();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnicornStartStreamRecording();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnicornStartStreamPlaybackToNow();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnicornStartStreamPlayback();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnicornSetLoggingEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnicornResetAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnicornPlayUnionAllPlayersHighlights(uint8 ReelId, uint8 MessageSettings, bool bExportSequenceFile);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnicornPlayTopHighlights(int32 NumHighlights, uint8 ReelId, uint8 MessageSetting, bool bExportSequenceFile);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnicornPlayTopEliminationHighlights(int32 NumHighlights, uint8 ReelId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnicornPlayThroughPlayerHighlightReel(uint8 ReelId, uint8 MessageSettings, bool bExportSequenceFile);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnicornPlayOrderedHighlightsWithSocialFeature(int32 FeatureAsInt, uint8 ReelId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnicornPlayOrderedHighlightsWithFeature(int32 FeatureAsInt, uint8 ReelId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnicornPlayLastEliminationHighlights(int32 NumHighlights, uint8 ReelId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnicornPlayHighlight(int32 HighlightId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnicornFollowPlayerWithHighlight(int32 HighlightId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnicornFakeAndUploadAndShutdown(int32 NumHighlights);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnicornFakeAndUpload(int32 NumHighlights);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnicornDebugUploadPayloadFile();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnicornDebugPlayerWithIdString(const FString& PlayerIdString);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnicornDebugHighlightTime(int32 HighlightId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnicornDebugHighlight(int32 HighlightId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnicornDebugCurrentReplayPlayer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnicornDebugCurrentPlayerSampler();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnicornDebugCurrentPlayerPlayerLog();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnicornCreateAndPlayServerGameHighlights(int32 TargetSeconds, uint8 ReelId, uint8 MessageSetting, bool bExportSequenceFile);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnicornClearDebugPlayer();
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void RunHighlightExtractors();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseChanged(EAthenaGamePhase GamePhase);
    
    UFUNCTION(BlueprintCallable)
    void HandleDemoRecordingFinish(UWorld* InWorld);
    
    UFUNCTION(BlueprintCallable)
    void HandleDemoPlaybackFinish(UWorld* InWorld);
    
};


#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "FortPlayerController.h"
#include "FortPlayerControllerFrontEnd.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortPlayerControllerFrontEnd : public AFortPlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUnlockAllZones;
    
    AFortPlayerControllerFrontEnd();
    UFUNCTION(BlueprintCallable, Exec)
    void StopWriteToAudioFile();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StopFacialAnimationTest();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StartWriteToAudioFile();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RunFacialAnimationTest(const FString& WaveFileName, int32 SampleRate);
    
    UFUNCTION(BlueprintCallable)
    void OpenEmotePicker();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVoiceChatPlayerMuted(const FUniqueNetIdRepl& UniqueNetId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInVoiceChat();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPendingPhoenixLevelUpNotifications() const;
    
    UFUNCTION(BlueprintCallable)
    void EmotePickerSelect();
    
    UFUNCTION(BlueprintCallable)
    void EmotePickerPrevWheel();
    
    UFUNCTION(BlueprintCallable)
    void EmotePickerNextWheel();
    
    UFUNCTION(BlueprintCallable)
    void CloseEmotePicker();
    
};


#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "LiveStreamHUDElement.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ULiveStreamHUDElement : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
    ULiveStreamHUDElement();
    UFUNCTION(BlueprintCallable)
    static void SetMirrorScreen(int32 ScreenIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetMirroredPIPAnalyicsMetadata(const FName MediaName, const int64 CurrentProgressTimecode, const FName MediaPlayerName);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUsingMirrorScreen();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMirrorScreen();
    
    UFUNCTION(BlueprintCallable)
    void FireMirroredPIPAnalytics(bool bInStarted);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyVideoPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateVideoPlayer();
    
};


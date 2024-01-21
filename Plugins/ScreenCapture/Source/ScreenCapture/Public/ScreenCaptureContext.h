#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ScreenCaptureFinishedDelegateDelegate.h"
#include "ScreenCaptureInterruptedDelegateDelegate.h"
#include "ScreenshotCapturedDelegateDelegate.h"
#include "VideoSavedToAlbumDelegateDelegate.h"
#include "ScreenCaptureContext.generated.h"

class UScreenCaptureContext;
class UTexture2D;

UCLASS(Blueprintable)
class SCREENCAPTURE_API UScreenCaptureContext : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScreenCaptureFinishedDelegate OnCaptureFinishedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScreenCaptureInterruptedDelegate OnCaptureInterruptedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVideoSavedToAlbumDelegate OnVideoSavedToAlbumDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScreenshotCapturedDelegate OnScreenshotCapturedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* PreviewImage;
    
public:
    UScreenCaptureContext();
    UFUNCTION(BlueprintCallable)
    void ToggleMicrophoneRecording(bool bEnableMicrophone);
    
    UFUNCTION(BlueprintCallable)
    void TakeScreenshot();
    
    UFUNCTION(BlueprintCallable)
    void StopCapture(bool bIsCaptureInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void StartCapture(bool bInRecordAppAudio, bool bGeneratePreviewImage);
    
    UFUNCTION(BlueprintCallable)
    bool SaveToAlbum(const FString& LocalFilePath);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveFile(const FString& LocalFilePath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRecording() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UScreenCaptureContext* CreateScreenCaptureContext(UObject* WorldContextObject);
    
};


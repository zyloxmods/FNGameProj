#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "AthenaSpatialFrontend.h"
#include "FortEventLevelScreen.generated.h"

class UFortActivatableVideoPanel;
class UFortEventLevelData;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortEventLevelScreen : public UAthenaSpatialFrontend {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortEventLevelData* EventLevelScreenData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortActivatableVideoPanel* CinematicMovieWidgetInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle StreamedVideoOpeningTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCollapseTopbar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCollapseBottombar;
    
public:
    UFortEventLevelScreen();
private:
    UFUNCTION(BlueprintCallable)
    void StreamedVideoOpeningTimedOut();
    
    UFUNCTION(BlueprintCallable)
    void StreamedVideoOnUrlSuccess(const FString& OpenedUrl);
    
    UFUNCTION(BlueprintCallable)
    void StreamedVideoOnUrlFailure(const FString& OpenedUrl);
    
    UFUNCTION(BlueprintCallable)
    void StreamedVideoOnSkipButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void StreamedVideoOnSkipBeforeVideoURLReceived();
    
    UFUNCTION(BlueprintCallable)
    void StreamedVideoOnOpenFailure(const FString& OpenedUrl);
    
    UFUNCTION(BlueprintCallable)
    void StreamedVideoOnMediaPlayerEndReached();
    
    UFUNCTION(BlueprintCallable)
    void StreamedVideoOnMediaOpened(const FString& OpenedUrl);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnEventCinematicVideoFinished();
    
};


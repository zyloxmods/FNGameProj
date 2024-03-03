#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortActivatableVideoPanel.h"
#include "OnMediaOpenedMonoDelegate.h"
#include "VideoConfig_Mono.h"
#include "FortActivatableMovieWidget_Monolithic.generated.h"

class UFortStreamMediaSource;
class UMediaPlayer;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortActivatableMovieWidget_Monolithic : public UFortActivatableVideoPanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMediaOpenedMono MediaOpenedMono;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortStreamMediaSource* MediaSourceMono;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaPlayer* StreamedMediaPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle PressToSkipAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle HoldToSkipAction;
    
public:
    UFortActivatableMovieWidget_Monolithic();
private:
    UFUNCTION(BlueprintCallable)
    void StreamedVideoOnUrlSuccess(const FString& URL);
    
    UFUNCTION(BlueprintCallable)
    void StreamedVideoOnUrlFailure(const FString& URL);
    
public:
    UFUNCTION(BlueprintCallable)
    void Play();
    
    UFUNCTION(BlueprintCallable)
    void LoadStreamingVideo(FVideoConfig_Mono Config, UFortStreamMediaSource* StreamMediaSource, bool& bNoAutoPlay);
    
};


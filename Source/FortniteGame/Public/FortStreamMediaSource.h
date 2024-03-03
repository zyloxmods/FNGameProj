#pragma once
#include "CoreMinimal.h"
#include "StreamMediaSource.h"
#include "MediaPlayerOptions.h"
#include "MetaDataFailureDelegate.h"
#include "OnRetrieveVideoUrlResultDelegate.h"
#include "FortStreamMediaSource.generated.h"

class APlayerController;
class UFortDownloadLocalizedOverlays;
class UMediaSource;
class UObject;
class UPrimitiveComponent;

UCLASS(Blueprintable, EditInlineNew, Config=Game)
class FORTNITEGAME_API UFortStreamMediaSource : public UStreamMediaSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString VideoStreamSource;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VideoStreamSourceAB;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> VideoId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlurlLive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxResolution;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxBandwidth;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AspectRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShareLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAudioOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPartySync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MediaDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> CDNDistribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoClearCDNDistribution;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRetrieveVideoUrlResult OnVideoUrlSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRetrieveVideoUrlResult OnVideoUrlFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetaDataFailure OnMetaDataFailure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortDownloadLocalizedOverlays* FortDownloadLocalizedOverlays;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StreamID;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StreamID_Development;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaSource* LocalFilePlaybackAsset;
    
    UFortStreamMediaSource();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMediaPlayerOptions UpdatePlayerOptions(FMediaPlayerOptions PlayerOptions) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    bool ShouldStreamBePlaying(const UObject* WorldContextObject, const UPrimitiveComponent* PrimitiveComponent, float CullRadius) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString ShouldProtectPlayerFromContent() const;
    
    UFUNCTION(BlueprintCallable)
    void SetPlaybackStartTime(float StartTime);
    
    UFUNCTION(BlueprintCallable)
    void RequestVideoUrl(const APlayerController* FortPC);
    
    UFUNCTION(BlueprintCallable)
    void ReinstateSharing();
    
    UFUNCTION(BlueprintCallable)
    bool IsScreenRecordingInProgress();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasLocalFilePlayback() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetCDNNumber();
    
    UFUNCTION(BlueprintCallable)
    void DisableSharing();
    
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "KairosAvatarDisplayInfo.h"
#include "KairosSceneInfo.h"
#include "KairosSceneManagerActor.generated.h"

class UAudioComponent;
class UUserWidget;

UCLASS(Blueprintable)
class KAIROSSCENECAPTURE_API AKairosSceneManagerActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FKairosAvatarDisplayInfo> DisplayAvatars;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform SpawnedPawnHeadCaptureTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* SnippetAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* ActiveGroupWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSnippetPaused;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKairosSceneInfo ActiveSceneInfo;
    
public:
    AKairosSceneManagerActor();
    UFUNCTION(BlueprintCallable)
    void StopAR();
    
    UFUNCTION(BlueprintCallable)
    void PauseOrResumeSnippet(const FString& PlayerId, bool bShouldPase);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OLD_OnSceneSetupComplete(FKairosSceneInfo CompleteSceneInfoCopy);
    
    UFUNCTION(BlueprintCallable)
    FKairosSceneInfo GetSceneInfo();
    
    UFUNCTION(BlueprintCallable)
    void BeginEmotePlaybackForPlayer(const FString& PlayerId, const FString& EmoteId);
    
};


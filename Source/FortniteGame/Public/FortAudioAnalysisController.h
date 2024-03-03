#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FortAudioAnalysisController.generated.h"

UCLASS(Blueprintable, MinimalAPI, Config=Game)
class AFortAudioAnalysisController : public AActor {
    GENERATED_BODY()
public:
    AFortAudioAnalysisController();
    UFUNCTION(BlueprintCallable)
    void Update();
    
    UFUNCTION(BlueprintCallable)
    static bool GetPapayaSpeakersEnabled();
    
};


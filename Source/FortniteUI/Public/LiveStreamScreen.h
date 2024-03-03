#pragma once
#include "CoreMinimal.h"
#include "FortActivatableVideoPanel.h"
#include "LiveStreamScreen.generated.h"

class UFortStreamMediaSource;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ULiveStreamScreen : public UFortActivatableVideoPanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortStreamMediaSource* StreamMediaSource;
    
public:
    ULiveStreamScreen();
private:
    UFUNCTION(BlueprintCallable)
    void OnRetrieveVideoUrlResult(const FString& URL);
    
};


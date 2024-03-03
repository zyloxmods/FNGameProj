#pragma once
#include "CoreMinimal.h"
#include "GameStateComponent.h"
#include "FortFrontendCompositeLevel.h"
#include "FortGameStateComponent_FrontEndFlow.generated.h"

class UFortFrontendPendingAsyncLevel;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortGameStateComponent_FrontEndFlow : public UGameStateComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortFrontendCompositeLevel> CurrentCompositeLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortFrontendPendingAsyncLevel*> AsyncStreamingLevels;
    
public:
    UFortGameStateComponent_FrontEndFlow();
};


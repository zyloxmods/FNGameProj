#pragma once
#include "CoreMinimal.h"
#include "GameStateComponent.h"
#include "DynamicCompositeWorld.h"
#include "FortGameStateComponent_DynamicStreamingLevel.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UFortGameStateComponent_DynamicStreamingLevel : public UGameStateComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDynamicCompositeWorld> DynamicWorlds;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableDynamicStreamingLevels;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysLoadDynamicAsyncStreamingLevels;
    
public:
    UFortGameStateComponent_DynamicStreamingLevel();
};


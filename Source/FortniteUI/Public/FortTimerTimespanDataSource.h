#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "FortTimespanDataSource.h"
#include "FortTimerTimespanDataSource.generated.h"

UCLASS(Blueprintable)
class UFortTimerTimespanDataSource : public UObject, public IFortTimespanDataSource {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FTimespanSourceDelegate, FTimespan&, Result);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFortTimespanDataSourceOnChangeInternalDelegate, UObject*, Source);
    
    UFortTimerTimespanDataSource();
    UFUNCTION(BlueprintCallable)
    void TickManually();
    
    UFUNCTION(BlueprintCallable)
    void StopTimer();
    
    UFUNCTION(BlueprintCallable)
    void StartTimer(float Delay, bool bTickImmediately);
    
    UFUNCTION(BlueprintCallable)
    void SetTimespanSource(const UFortTimerTimespanDataSource::FTimespanSourceDelegate& Value);
    
    
    // Fix for true pure virtual functions not being implemented
};


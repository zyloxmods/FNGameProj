#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AutomationPerfMonitorManager.generated.h"

class UAutomationPerfMonitorManager;

UCLASS(Blueprintable, Config=Game)
class UAutomationPerfMonitorManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> DesiredStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRecording;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSinceLastRecord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastGoodFrame;
    
    UAutomationPerfMonitorManager();
    UFUNCTION(BlueprintCallable)
    void StopRecordingFTestPerf();
    
    UFUNCTION(BlueprintCallable)
    void StartRecordingFTestPerf(TArray<FString> StatsToRecord);
    
    UFUNCTION(BlueprintCallable)
    bool IsRecordingFTestPerf();
    
    UFUNCTION(BlueprintCallable)
    float GetStatAverage(const FString& StatName);
    
    UFUNCTION(BlueprintCallable)
    static UAutomationPerfMonitorManager* GetPerfMonitorInstance();
    
};


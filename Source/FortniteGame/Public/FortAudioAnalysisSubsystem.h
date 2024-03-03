#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "OnEnvelopeFollowerUpdatedDelegate.h"
#include "OnSpectralAnalysisUpdatedDelegate.h"
#include "FortAudioAnalysisSubsystem.generated.h"

class UAudioAnalysisSubmixAnalyzer;
class UFortAudioAnalysisDebugWidget;
class UFortAudioAnalysisSettings;
class USoundSubmix;

UCLASS(Blueprintable, Config=Game)
class UFortAudioAnalysisSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath AudioAnalysisSettingsPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAudioAnalysisSettings* AudioAnalysisSettings;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnvelopeFollowerUpdated OnEnvelopeFollowerUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSpectralAnalysisUpdated OnSpectralAnalysisUpdated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortAudioAnalysisDebugWidget* DebugWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<USoundSubmix*, UAudioAnalysisSubmixAnalyzer*> SubmixAnalyzers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<USoundSubmix*, int32> SubmixRefCount;
    
public:
    UFortAudioAnalysisSubsystem();
    UFUNCTION(BlueprintCallable)
    void UnRegisterSubmix(USoundSubmix* InSubmix);
    
    UFUNCTION(BlueprintCallable)
    void UnRegisterDefaultSubmix();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSubmix(USoundSubmix* InSubmix);
    
    UFUNCTION(BlueprintCallable)
    void RegisterDefaultSubmix();
    
private:
    UFUNCTION(BlueprintCallable)
    UAudioAnalysisSubmixAnalyzer* GetAnalyzerForSubmix(USoundSubmix* InSubmix);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortAudioAnalysisSettings* GetAnalysisSettings() const;
    
};


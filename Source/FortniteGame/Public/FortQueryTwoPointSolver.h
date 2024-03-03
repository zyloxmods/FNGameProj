#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ETwoPointSolverRotationA.h"
#include "OnTwoPointSolverFailedDelegate.h"
#include "OnTwoPointSolverFinishedDelegate.h"
#include "FortQueryTwoPointSolver.generated.h"

class UEnvQuery;
class UFortAISystem;

UCLASS(Blueprintable)
class UFortQueryTwoPointSolver : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* QueryPointA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* QueryPointB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnvNamedValue> QueryParamsA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnvNamedValue> QueryParamsB;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTwoPointSolverFinished OnFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTwoPointSolverFailed OnFailed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETwoPointSolverRotationA RotationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator MinRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator MaxRotationOffset;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseNegativeAngleOffsets: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUsePositiveAngleOffsets: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAISystem* AISys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* CachedQuerier;
    
public:
    UFortQueryTwoPointSolver();
    UFUNCTION(BlueprintCallable)
    void Start(UObject* Querier);
    
    UFUNCTION(BlueprintCallable)
    void SkipToNextPointA();
    
    UFUNCTION(BlueprintCallable)
    void SetCustomRotationA(const FRotator& Rotation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCustomRotationMode(const FVector& InPointA, const FVector Querier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetRandomRotationOffset() const;
    
    UFUNCTION(BlueprintCallable)
    void AddNamedFloatParamB(FName ParamName, float Value);
    
    UFUNCTION(BlueprintCallable)
    void AddNamedFloatParamA(FName ParamName, float Value);
    
};


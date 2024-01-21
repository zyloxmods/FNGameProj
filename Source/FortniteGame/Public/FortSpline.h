#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "FortCatmullRomSpline.h"
#include "FortSpline.generated.h"

UCLASS(Blueprintable)
class UFortSpline : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConstantVelocity;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortCatmullRomSpline Spline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInterpCurveFloat SplineLookupTable;
    
public:
    UFortSpline();
    UFUNCTION(BlueprintCallable)
    void SetupSpline(TArray<FVector> ControlPoints, float InDuration);
    
    UFUNCTION(BlueprintCallable)
    void SetDuration(float InDuration);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVelocityCorrectedTime(float Time) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetTangentFromTime(float Time) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetStartPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSplineLengthAtTime(float Time, float StepSize) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSplineLength(float StepSize) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPositionFromTime(float Time) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetNormalFromTime(float Time) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetEndPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetBinormalFromTime(float Time) const;
    
    UFUNCTION(BlueprintCallable)
    void EnableConstantVelocity(bool ConstVelEnabled);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void DrawDebugSpline(UObject* WorldContextObject, int32 Steps, float LifeTime, float Thickness, bool bPersistent, bool bJustDrawSpline, float BasisLength);
    
    UFUNCTION(BlueprintCallable)
    void ClearSpline();
    
    UFUNCTION(BlueprintCallable)
    void AddControlPoint(const FVector& Point, int32 Index);
    
};


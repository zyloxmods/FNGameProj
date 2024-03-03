#pragma once
#include "CoreMinimal.h"
#include "CustomCharacterPartModifier.h"
#include "CustomCharacterPartModifier_TripleScoopBackpack_Common.generated.h"

class UWorld;

UCLASS(Blueprintable)
class ACustomCharacterPartModifier_TripleScoopBackpack_Common : public ACustomCharacterPartModifier {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseWheelSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdlePlayerSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RollingPeriod;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* CachedWorldPtr;
    
public:
    ACustomCharacterPartModifier_TripleScoopBackpack_Common();
};


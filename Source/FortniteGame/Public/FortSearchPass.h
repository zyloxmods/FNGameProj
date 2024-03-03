#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortSearchPassParams.h"
#include "FortSearchPassState.h"
#include "FortSearchPass.generated.h"

class UFortSessionHelper;

UCLASS(Blueprintable, NotPlaceable, Config=Game)
class UFortSearchPass : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortSessionHelper* SessionHelper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortSearchPassParams CurrentSearchParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortSearchPassState CurrentSearchPassState;
    
public:
    UFortSearchPass();
};


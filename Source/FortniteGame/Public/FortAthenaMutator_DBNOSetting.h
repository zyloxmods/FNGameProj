#pragma once
#include "CoreMinimal.h"
#include "EDBNOMutatorType.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_DBNOSetting.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_DBNOSetting : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDBNOMutatorType DBNOSetting;
    
public:
    AFortAthenaMutator_DBNOSetting();
};


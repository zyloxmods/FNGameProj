#pragma once
#include "CoreMinimal.h"
#include "FortMobileHUDProfileBase.h"
#include "UserAction.h"
#include "UserGenericAction.generated.h"

USTRUCT(BlueprintType)
struct FUserGenericAction : public FUserAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMobileHUDProfileBase ActiveProfile;
    
    FORTNITEUI_API FUserGenericAction();
};


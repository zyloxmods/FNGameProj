#pragma once
#include "CoreMinimal.h"
#include "FortMobileHUDProfileBase.h"
#include "UserAction.h"
#include "UserSelectProfileAction.generated.h"

USTRUCT(BlueprintType)
struct FUserSelectProfileAction : public FUserAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMobileHUDProfileBase PreviousProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMobileHUDProfileBase NewProfile;
    
    FORTNITEUI_API FUserSelectProfileAction();
};


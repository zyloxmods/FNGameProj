#pragma once
#include "CoreMinimal.h"
#include "RecruitHeroDelegateDelegate.generated.h"

class UFortHeroType;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRecruitHeroDelegate, UFortHeroType*, RecruitedHeroType);


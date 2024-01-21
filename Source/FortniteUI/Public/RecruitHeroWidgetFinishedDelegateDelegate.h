#pragma once
#include "CoreMinimal.h"
#include "RecruitHeroWidgetFinishedDelegateDelegate.generated.h"

class UFortHero;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FRecruitHeroWidgetFinishedDelegate, UFortHero*, NewHero);


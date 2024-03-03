#pragma once
#include "CoreMinimal.h"
#include "FortServerBrowser.h"
#include "FortServerBrowserPlayground.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortServerBrowserPlayground : public UFortServerBrowser {
    GENERATED_BODY()
public:
    UFortServerBrowserPlayground();
};


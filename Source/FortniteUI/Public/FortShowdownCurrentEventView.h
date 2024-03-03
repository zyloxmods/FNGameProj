#pragma once
#include "CoreMinimal.h"
#include "FortShowdownDetailView.h"
#include "FortShowdownCurrentEventView.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortShowdownCurrentEventView : public UFortShowdownDetailView {
    GENERATED_BODY()
public:
    UFortShowdownCurrentEventView();
};

